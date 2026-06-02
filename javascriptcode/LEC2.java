import java.util.ArrayList;

public class LEC2 {
    public static void main(){
        ArrayList<Integer> list = new ArrayList<>();
        list.add(40);
        list.add(5);
        list.add(3);
        list.add(10);
        list.add(20);
        list.add(3);
        int mid = list.size() / 2;
        for(int i = mid; i < list.size(); i++){
            System.out.println(list.get(i));
        }
    }
}
