package org.example;

public class C0Main {

        //aprendendo sobre Threads

        static void main() {

            //thread main
            Thread t_main = Thread.currentThread();
            System.out.println(t_main.getName());

            //criando nova thread
            Thread t0 = new Thread(() -> {
                System.out.println(Thread.currentThread().getName());
            });

            //RUN executa na main
            t0.run();

            //Start executa na nova
            t0.start();




        }
    }
