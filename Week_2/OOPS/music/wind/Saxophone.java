package Week_2.OOPS.music.wind;

import Week_2.OOPS.music.Playable;

public class Saxophone implements Playable {
    @Override
    public void play() {
        System.out.println("Saxophone is playing: Toot, Toot, Toot...");
    }
}