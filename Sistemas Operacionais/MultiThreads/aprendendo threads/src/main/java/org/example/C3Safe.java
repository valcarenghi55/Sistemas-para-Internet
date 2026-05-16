package org.example;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class C3Safe {

    //CopyOnWrite é muito pesado

    //coleção thread-safe
    private static List<String> lista = new CopyOnWriteArrayList<>();

    static void main(String args[]) throws InterruptedException {

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


