import java.util.*;

class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int p = 0;
        Deque<Truck> Q = new LinkedList<>();
        
        while(true){
            for(Truck t : Q) t.t-=1;
            
            // 만약 첫번째 값의 시간이 0 이면
            // weight 다시 더하고 삭제
            if(!Q.isEmpty() && Q.peek().t == 0) {
                weight += Q.peek().w;
                Q.remove();
            }
            
            // 무게 - 현재 트럭 무게가 0보다 작으면
            // continue;
            if(p < truck_weights.length && weight - truck_weights[p] >= 0){
                Q.add(new Truck(truck_weights[p], bridge_length));
                weight -= truck_weights[p];
                p++;
            }
            
            answer++;
            
            if(p == truck_weights.length && Q.size() == 0) break;
        }
        return answer;
    }
}

class Truck {
    int w, t;
    
    Truck(int w, int t){
        this.w = w;
        this.t = t;
    }
}
