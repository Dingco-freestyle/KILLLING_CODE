import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int W, N;
        W = Integer.parseInt(st.nextToken());
        N = Integer.parseInt(st.nextToken());

        PriorityQueue<Obj> pQ = new PriorityQueue<>((a, b) -> b.P - a.P);
        

        for(int i = 0 ; i < N ; i++){
            st = new StringTokenizer(br.readLine());
            int M = Integer.parseInt(st.nextToken());
            int P = Integer.parseInt(st.nextToken());
            
            Obj obj = new Obj(M, P);

            pQ.offer(obj);
        }

        int ans = 0;
        while(W > 0){
            Obj obj = pQ.poll();
            if(W - obj.M < 0){
                ans += W * obj.P;
                break;
            }
            ans += obj.M * obj.P;
            W -= obj.M;
        }

        System.out.print(ans);
    }
}

class Obj{
    int M, P;

    Obj(int M, int P){
        this.M = M;
        this.P = P;
    }
}
