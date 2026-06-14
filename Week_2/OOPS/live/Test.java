package Week_2.OOPS.live;

import Week_2.OOPS.music.Playable;
import Week_2.OOPS.music.string.Veena;
import Week_2.OOPS.music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        
        Veena v = new Veena();
        v.play();

        
        Saxophone s = new Saxophone();
        s.play();

        System.out.println("--- Polymorphism Demo ---");

        
        Playable p;

        p = v; 
        p.play(); 

        p = s; 
        p.play(); 
    }
}