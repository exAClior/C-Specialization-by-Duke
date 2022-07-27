#include "stdio.h"
#include "stdlib.h"

typedef struct _retire_info {
  int months;            // number of months it's applicable to
  double contribution;   // how many dollor change per month
  double rate_of_return; // adjust for inflation

} retire_info;

void retirement(int *startAge,         // in months
                double *initial,       // initial savings in dollars
                retire_info *working,  // info about working
                retire_info *retired); // info about being retired

void time_ellapse_month(double *initial, retire_info *info);

int main() {

  int startAge = 327;
  double initial = 21345;

  retire_info working;
  working.months = 489;
  working.contribution = 1000;
  working.rate_of_return = 0.045 / 12;

  retire_info retired;
  retired.months = 384;
  retired.contribution = -4000;
  retired.rate_of_return = 0.01 / 12;

  retirement(&startAge, &initial, &working, &retired);
  return EXIT_SUCCESS;
}

void time_ellapse_month(double *initial, retire_info *info) {
  *initial *= (1 + info->rate_of_return);
  *initial += info->contribution;

  return;
}

void retirement(int *startAge, double *initial, retire_info *working,
                retire_info *retired) {
  for (int i = 0; i < (*working).months; i++) {
    printf("Age %3d month %2d you have $%.2lf\n", (*startAge + i) / 12,
           (*startAge + i) % 12, *initial);
    time_ellapse_month(initial, working);
  }
  for (int i = 0; i < (*retired).months; i++) {
    printf("Age %3d month %2d you have $%.2lf\n",
           (*startAge + working->months + i) / 12,
           (*startAge + working->months + i) % 12, *initial);
    time_ellapse_month(initial, retired);
  }
  return;
}
