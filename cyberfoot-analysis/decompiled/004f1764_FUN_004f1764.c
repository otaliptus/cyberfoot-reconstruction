// Address: 004f1764
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f1764(int *param_1,short *param_2,uint param_3)

{
  int *piVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  FUN_004f36ec(param_1,param_2,param_3);
  if (*(char *)((int)param_1 + 0x279) != '\0') {
    switch(*param_2) {
    case 0x21:
      if ((param_3 & 1) == 0) {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        FUN_0040c3fc(0xffffffff);
        (**(code **)(*param_1 + 0x114))();
      }
      else {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        func_0x004bc558(0xffffffff);
        (**(code **)(*param_1 + 0x114))();
      }
      break;
    case 0x22:
      if ((param_3 & 1) == 0) {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        FUN_0040c3fc(1);
        (**(code **)(*param_1 + 0x114))();
      }
      else {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        func_0x004bc558(1);
        (**(code **)(*param_1 + 0x114))();
      }
      break;
    default:
      if (*(char *)((int)param_1 + 0x27a) == '\x01') {
        *param_2 = 0;
      }
      break;
    case 0x25:
      if ((param_3 & 1) == 0) {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        FUN_004bc5a0(0xffffffff);
        (**(code **)(*param_1 + 0x114))();
      }
      else {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        FUN_0040c3fc(0xffffffff);
        (**(code **)(*param_1 + 0x114))();
      }
      break;
    case 0x26:
      in_ST0 = in_ST2;
      in_ST1 = in_ST3;
      (**(code **)(*param_1 + 0xec))();
      FUN_004bc57c(0xffffffff);
      (**(code **)(*param_1 + 0x114))();
      break;
    case 0x27:
      if ((param_3 & 1) == 0) {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        FUN_004bc5a0(1);
        (**(code **)(*param_1 + 0x114))();
      }
      else {
        in_ST0 = in_ST2;
        in_ST1 = in_ST3;
        (**(code **)(*param_1 + 0xec))();
        FUN_0040c3fc(1);
        (**(code **)(*param_1 + 0x114))();
      }
      break;
    case 0x28:
      in_ST0 = in_ST2;
      in_ST1 = in_ST3;
      (**(code **)(*param_1 + 0xec))();
      FUN_004bc57c(1);
      (**(code **)(*param_1 + 0x114))();
    }
    if (*param_2 != 0) {
      piVar1 = (int *)FUN_00403c34(param_1[0x9c],PTR_PTR_004e9bc4);
      (**(code **)(*param_1 + 0xec))();
      FUN_0040c388(&uStack_e,&uStack_c,&uStack_a,(double)in_ST0);
      FUN_004eb51c(piVar1,CONCAT22(extraout_var,uStack_e));
      FUN_004eb4e0(piVar1,CONCAT22(extraout_var_00,uStack_c));
      FUN_004eb420(piVar1,CONCAT22(extraout_var_01,uStack_a));
      (**(code **)(*param_1 + 0xec))();
      *(double *)(piVar1 + 0xa6) = (double)in_ST1;
      (**(code **)(*piVar1 + 0x7c))();
    }
  }
  return;
}

