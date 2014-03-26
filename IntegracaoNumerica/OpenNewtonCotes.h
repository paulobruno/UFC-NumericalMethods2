/*********************************************/
/*                                           */
/*  2014, Fortaleza, Ceara                   */
/*                                           */
/*  UNIVERSIDADE FEDERAL DO CEARA            */
/*  CURSO DE COMPUTACAO                      */
/*  METODOS NUMERICOS II                     */
/*  PROFESSORA: Emanuele Marques dos Santos  */
/*                                           */
/*  Jose Orlando Barbosa Filho      336224   */
/*  Paulo Bruno de Sousa Serafim    354086   */
/*                                           */
/*********************************************/

#ifndef OPEN_NEWTON_COTES_H
#define OPEN_NEWTON_COTES_H

#include "Integration.h"
#include "Function.h"
#include <vector>
#include <string>

class OpenNewtonCotes : public Integration
{
public:

	OpenNewtonCotes(std::string filename, const std::vector<Function*>& functions);

	double calculateIntegral();

protected:

	int m, n;
	double xMin, xMax;
	Function *func;

	// fixed values
	double alpha[4];
	int weight[4][5];
};

#endif // OPEN_NEWTON_COTES_H