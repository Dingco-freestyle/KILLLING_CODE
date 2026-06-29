import java.util.*;

class Solution {
    public int[] solution(int[] prices) {
        int[] answer = new int[prices.length];
        Deque<Stock> Q = new ArrayDeque<>();
        
        for(int i = 0 ; i < prices.length ; i++){
            int cnt = 0;
            while(!Q.isEmpty() && Q.peekLast().p > prices[i]){
                cnt++;
                answer[Q.peekLast().i] = i - Q.peekLast().i;
                Q.removeLast();
            }
            
            for(Stock s : Q) s.t += cnt;
            
            Q.add(new Stock(i, prices[i], 0));
        }
        
        while(!Q.isEmpty()){
            answer[Q.peekLast().i] = prices.length - 1 - Q.peekLast().i;
            Q.pollLast();
        }
        
        return answer;
    }
}

class Stock {
    int i, t, p;
    
    Stock(int i, int p, int t){
        this.i = i;
        this.p = p;
        this.t = t;
    }
}
