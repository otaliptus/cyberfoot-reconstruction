// Address: 00514f28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00514f28(int *param_1,undefined4 param_2,undefined3 param_3,undefined4 param_4,int param_5)

{
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x150))(param_1,(char)param_3,param_5,param_4);
  if (param_5 != -1) {
    uStack_8 = CONCAT13((char)param_3,param_3) & 0xff00ffff;
    if (uStack_8._3_1_ == '\0') {
      uStack_8 = 0;
    }
    else if (uStack_8._3_1_ == '\x01') {
      uStack_8 = 0x1050000;
    }
    else if (uStack_8._3_1_ == '\x03') {
      uStack_8 = 0x3030000;
    }
    FUN_00403c80(param_1,uStack_8._2_1_,param_5);
  }
  return;
}

