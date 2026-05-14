import java.util.concurrent.Semaphore;

public class API {


    private Semaphore s = new Semaphore(5);

    public void Conectar() {

        synchronized (this) {

            if (s.availablePermits() == 5) {

                this.notifyAll();

            }
            try {
                s.acquire();
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }

        }

    }

    public void Desconectar () {

        s.release();

    }
}
