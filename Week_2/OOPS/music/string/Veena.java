package Week_2.OOPS.music.string;

import Week_2.OOPS.music.Playable;

public class Veena implements Playable {
    @Override
    public void play() {
        System.out.println("Veena is playing: Pluck, Pluck, Pluck...");
    }
}