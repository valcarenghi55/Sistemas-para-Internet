package org.example;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class C2Colecao {

    //Usando coleção é igual ao sincronismo, mas automatico

    private static List<String> lista = new ArrayList<>();

    static void main(String args[]) throws InterruptedException {

        //usar coleção
        lista = Collections.synchronizedList(lista);

        MeuRun run = new MeuRun();

        Thread t0 = new Thread(run);
        Thread t1 = new Thread(run);
        Thread t2 = new Thread(run);
        t0.start();
        t1.start();
        t2.start();
        Thread.sleep(50);

        System.out.println(lista);

    }

    public static class MeuRun implements Runnable{

        @Override
        public void run() {
            System.out.println(Thread.currentThread().getName() + "acessou");
            lista.add("1");
        }
    }

}

