import java.util.*;

class Vector {
    protected float  x;
    protected float  y;

    public Vector(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void add(Vector vector) {
        this.x += vector.x;
        this.y += vector.y;
    }

    public void sub(Vector vector) {
        this.x -= vector.x;
        this.y -= vector.y;
    }

    public void mul(Vector vector) {
        this.x *= vector.x;
        this.y *= vector.y;
    }

    public void div(Vector vector) {
        this.x /= vector.x;
        this.y /= vector.y;
    }
}
