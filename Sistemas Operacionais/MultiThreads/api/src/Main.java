public class Main {

    public static void main(String[] args) {

        API api = new API();

        for(int i = 0; i < 200; i++){
            Thread.ofPlatform().start(new Conexao(api, i));
        }

    }

}
