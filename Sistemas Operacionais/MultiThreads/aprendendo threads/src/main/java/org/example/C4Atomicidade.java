package org.example;

import java.util.concurrent.atomic.AtomicInteger;

public class C4Atomicidade {

    static AtomicInteger i = new AtomicInteger(-1);

    static void main() throws InterruptedException {

        rune run = new rune();

        Thread t0 = new Thread(run);
        Thread t2 = new Thread(run);
        Thread t3 = new Thread(run);

        t0.start();
        t2.start();
        t3.start();

        Thread.sleep(100);

        System.out.println(i);

    }

    public static class rune implements Runnable{

        @Override
        public void run() {

            //i++;
            System.out.println(Thread.currentThread().getName() + ": " + i.incrementAndGet());

        }
    }

}
