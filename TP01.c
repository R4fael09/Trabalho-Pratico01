#include <stdio.h>
#include <stdlib.h>

	int main() {
    int abc, c, d, u, cba, x, y, z, xyz, zyx, resultado;

    printf("Digite um numero de tres digitos (abc): ");
    scanf("%d", &abc);

    // Verifica se possui os 3 digitos
    if (abc <= 100 && abc >= 999) {
        printf("O numero nao atende o requisito. O programa sera encerrado.\n");
        return 1; 
    }

    // Separa a centena, a dezena e a unidade do numero abc
    c = abc / 100;
    d = (abc / 10) % 10;
    u = abc % 10;

    // Diferença entre a centena e a unidade
    int diferenca = c - u;

    // Confirmar de é maior ou igual a 2
    if (diferenca >= 2) {
        // Alterar a ordem dos dígitos para cba
        cba = c * 100 + d * 10 + u;

        // Soma abc e cba para virar xyz
        xyz = abc + cba;

        // Alterar os dígitos para zyx
        z = xyz / 100;
        y = (xyz / 10) % 10;
        x = xyz % 10;
        zyx = z * 100 + y * 10 + x;

        // Somar xyz e zyx e obter o resultado final para imprimir o resultado
        resultado = xyz + zyx;

        // Exibir os resultados
        printf("abc: %d\n", abc);
        printf("cba: %d\n", cba);
        printf("xyz: %d\n", xyz);
        printf("zyx: %d\n", zyx);
        printf("Resultado: %d\n", resultado);
    } else {
        printf("A diferenca entre a e c nao e maior ou igual a 2. Encerrando o programa.\n");
    }

    return 0; 
}
