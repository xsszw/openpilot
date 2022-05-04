#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_8301923599278972548);
void live_err_fun(double *nom_x, double *delta_x, double *out_4458924098217951613);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_1238814110411554324);
void live_H_mod_fun(double *state, double *out_4925106014224474014);
void live_f_fun(double *state, double dt, double *out_8227771541342622830);
void live_F_fun(double *state, double dt, double *out_3902999017073944317);
void live_h_4(double *state, double *unused, double *out_2261974283875664158);
void live_H_4(double *state, double *unused, double *out_5042623163325438841);
void live_h_9(double *state, double *unused, double *out_976526803822305666);
void live_H_9(double *state, double *unused, double *out_6116901975119665305);
void live_h_10(double *state, double *unused, double *out_1888578951924928968);
void live_H_10(double *state, double *unused, double *out_912780544755277641);
void live_h_12(double *state, double *unused, double *out_8198474626803891298);
void live_H_12(double *state, double *unused, double *out_1338635213717294155);
void live_h_31(double *state, double *unused, double *out_2039950958234072874);
void live_H_31(double *state, double *unused, double *out_2991429564376648574);
void live_h_32(double *state, double *unused, double *out_6511248151241708409);
void live_H_32(double *state, double *unused, double *out_2809874807830963984);
void live_h_13(double *state, double *unused, double *out_5927852769191502793);
void live_H_13(double *state, double *unused, double *out_6593362093603591205);
void live_h_14(double *state, double *unused, double *out_976526803822305666);
void live_H_14(double *state, double *unused, double *out_6116901975119665305);
void live_h_33(double *state, double *unused, double *out_6135122230001918360);
void live_H_33(double *state, double *unused, double *out_159127440262209030);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}