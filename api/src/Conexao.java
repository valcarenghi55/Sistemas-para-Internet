import java.security.SecureRandom;
import java.util.Random;

public class Conexao implements Runnable{

    private API api;
    private int num;

     public Conexao(API api,  int num) {
         this.api = api;
         this.num= num;
     }

     @Override
     public void run() {



            api.Conectar();
            Conectado();
            api.Desconectar();



     }

     public void Conectado(){

         System.out.println("[ Conexao = " + num + " ]Conectado");

         try {
             Thread.sleep(10000);
         } catch (InterruptedException e) {
             throw new RuntimeException(e);
         }

         System.out.println("[ Conexao = " + num + " ]Desconectada");

     }

}



