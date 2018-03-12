/*   Copyright 2018 Siddhartha singh sidd5sci@gmail.com
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
       http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
       
*/
#include<cmath>


class Vector {
    protected float  x;
    protected float  y;
    protected float  z;
    
    /*
     * initilize the vector 
     */
    public Vector(int x, int y,int z) {
        this.x = x;
        this.y = y;
        this.z = z;
    }

    /*
     * Add two vector 
     */
    public void add(Vector vector) {
        this.x += vector.x;
        this.y += vector.y;
        this.z += vector.z;
    }

    /*
     * substract two vectors 
     */
    public void sub(Vector vector) {
        this.x -= vector.x;
        this.y -= vector.y;
        this.z -= vector.z;
    }

    /*
     * multiply two vectors
     */
    public void mul(Vector vector) {
        this.x *= vector.x;
        this.y *= vector.y;
        this.z *= vector.z;
    }
    
    /*
     * Divide two vectors 
     */
    public void div(Vector vector) {
        this.x /= vector.x;
        this.y /= vector.y;
        this.z /= vector.z;
    }
    
    /*
     *  dot product of the two vectors 
     */
    public float dot(Vector vector){
           float x =  (this.x *vector.x)-(this.z*vector.y);
           float y =  this.y *vector.y;
            return x+y;
    }
    
    /*
     * Return the vector by multiplying the two vectors 
     */
    public Vector cross(Vector vector){
           float x =  (vctr.y*self.z - vctr.z*self.y)
           float  y = (vctr.x*self.z - vctr.z*self.x)
           float z = (vctr.x*self.y - vctr.y*self.x)
           Vector v = new Vector(x,y);
           return v;
    }
    
    /*
     *  calculate the magnitude of the vector and return it 
     */
    public float calMag(){
        return  math.sqrt((this.x*this.x)+(this.y*this.y)+(this.z*this.z));
    }
    
    /*
     *  Normalise the vector 
     */
    public void normalise(){
        this.x /= this.calMag();
        this.y /= this.calMag();
        this.z /= this.calMag();
    }
    
};
