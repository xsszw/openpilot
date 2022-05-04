#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_83307841695452990);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_6051657461793340812);
void car_H_mod_fun(double *state, double *out_488749494398042614);
void car_f_fun(double *state, double dt, double *out_1872838173031794189);
void car_F_fun(double *state, double dt, double *out_4414573337021014229);
void car_h_25(double *state, double *unused, double *out_3648669685923734090);
void car_H_25(double *state, double *unused, double *out_8846807779040404979);
void car_h_24(double *state, double *unused, double *out_3995484833699386610);
void car_H_24(double *state, double *unused, double *out_9129478812625807913);
void car_h_30(double *state, double *unused, double *out_11220157669711740);
void car_H_30(double *state, double *unused, double *out_8976146726183645049);
void car_h_26(double *state, double *unused, double *out_5653950028750668575);
void car_H_26(double *state, double *unused, double *out_5858432975795090413);
void car_h_27(double *state, double *unused, double *out_6269338059260359382);
void car_H_27(double *state, double *unused, double *out_7295834035725481656);
void car_h_29(double *state, double *unused, double *out_5496304189010544195);
void car_H_29(double *state, double *unused, double *out_5582471308855930623);
void car_h_28(double *state, double *unused, double *out_7628965590269729210);
void car_H_28(double *state, double *unused, double *out_500072291786400049);
void car_h_31(double *state, double *unused, double *out_1388451120849144840);
void car_H_31(double *state, double *unused, double *out_8816161817163444551);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}