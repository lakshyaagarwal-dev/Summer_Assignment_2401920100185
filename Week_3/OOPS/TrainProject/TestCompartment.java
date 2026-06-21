import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}


class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class: Premium seating. Please ensure you have a valid First Class ticket.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies: Reserved exclusively for female passengers.";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "General: Open seating. Valid for general/unreserved ticket holders.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage: Only heavy baggage allowed. No passengers permitted to travel here.";
    }
}


public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] train = new Compartment[10];
        Random random = new Random();

        for (int i = 0; i < train.length; i++) {
            int randomNum = random.nextInt(4) + 1; 

            switch (randomNum) {
                case 1: train[i] = new FirstClass(); break;
                case 2: train[i] = new Ladies(); break;
                case 3: train[i] = new General(); break;
                case 4: train[i] = new Luggage(); break;
            }
        }

        System.out.println("--- Train Coach Layout & Notices ---");
        for (int i = 0; i < train.length; i++) {
            System.out.println("Coach " + (i + 1) + " -> " + train[i].notice());
        }
    }
}