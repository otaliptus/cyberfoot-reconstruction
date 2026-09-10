// Address: 004c4ba8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004c4ba8(byte *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < (int)(uint)*param_1) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    FUN_004032a8(param_3 + 2,0x20,0);
    for (param_1 = param_1 + 2; (param_2 < (int)(uint)*param_3 && (*param_1 == 0));
        param_1 = param_1 + 1) {
      *param_3 = *param_3 - 2;
    }
    uVar1 = FUN_004c5670(param_3);
    uVar1 = (uVar1 & 0xffff) + (uint)*param_3 + 2 >> 1;
    if (0x20 < uVar1) {
      uVar1 = 0x20;
    }
    FUN_00402a04(param_1,param_3 + 2,uVar1);
  }
  else {
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)param_3 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
    }
    *(undefined2 *)param_3 = *(undefined2 *)param_1;
  }
  return;
}

