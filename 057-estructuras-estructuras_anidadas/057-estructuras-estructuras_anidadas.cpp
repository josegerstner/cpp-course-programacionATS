/* Estructuras anidadas (una estructura dentro de otra)
struct info_direccion{
      char direccion[30];
      char ciudad[30];
      char provincia[30];
};

struct empleado{
      char nombre[20];
      struct info_direccion dir_empleado;
      double salario;
};
*/