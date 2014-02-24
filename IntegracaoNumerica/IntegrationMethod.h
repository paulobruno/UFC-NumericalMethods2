/* 2014, Fortaleza, Ceara
 *
 * UNIVERSIDADE FEDERAL DO CEARA
 * CURSO DE COMPUTACAO
 * METODOS NUMERICOS II
 * PROFESSORA: Emanuele Marques dos Santos
 *
 * Jonas Lima da Silva             344090
 * Livio de Lima Sales             343158
 * Paulo Bruno de Sousa Serafim    354086
 */

#ifndef INTEGRATION_METHOD_H
#define INTEGRATION_METHOD_H

#include "MnTableReader.h"
#include <vector>

class IntegrationMethod
{
	public:
		IntegrationMethod(MnTableReader table);
		virtual ~IntegrationMethod() {}

		virtual double calculateIntegral() = 0;

	protected:
		unsigned int m;
		std::vector<double> x, fx;
};

#endif // INTEGRATION_METHOD_H
