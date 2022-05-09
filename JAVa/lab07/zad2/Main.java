package lab07.zad2;

public class Main {
    public static void main(String[] args) {
        Xbox xbox = new Xbox();
        Playstation playstation = new Playstation();
        XboxGame xboxGame = new XboxGame();
        PlaystationGame playstationGame = new PlaystationGame();

        xbox.playGame(xboxGame);
        playstation.playGame(playstationGame);
    }

}
