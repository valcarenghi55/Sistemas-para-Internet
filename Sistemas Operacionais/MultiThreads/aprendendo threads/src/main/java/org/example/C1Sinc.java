package org.example;

import java.util.ArrayList;
import java.util.List;

public class C1Sinc {

    //Usando sincronização acaba com paralelismo

    private static List<String> lista = new ArrayList<>();

    static void main(String args[]) throws InterruptedException {

        //usar coleção
        MeuRun run = new MeuRun();

        Thread t0 = new Thread(run);
        Thread t1 = new Thread(run);
        Thread t2 = new Thread(run);
        Thread t3 = new Thread(run);
        Thread t4 = new Thread(run);
        Thread t5 = new Thread(run);
        t0.start();
        t1.start();
        t2.start();
        t3.start();
        t4.start();
        t5.start();

        Thread.sleep(50);

        System.out.println(lista);

    }

    public static class MeuRun implements Runnable{

        @Override
        public void run() {
            synchronized (this){
                System.out.println(Thread.currentThread().getName() + "acessou");
                lista.add("1");
            }

        }
    }

}

