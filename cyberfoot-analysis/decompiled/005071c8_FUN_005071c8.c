// Address: 005071c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005071c8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0046b148(param_1);
  FUN_004e2eac(param_1 + 0x163);
  *(ushort *)(param_1 + 0x139) = ~DAT_00507278 & *(ushort *)(param_1 + 0x139);
  FUN_00513cd0(param_1);
  if ((char)param_1[0xaf] == '\x01') {
    FUN_00513d84(param_1);
    uVar2 = (**(code **)(*param_1 + 0x138))();
    FUN_00511a00(param_1,uVar2,0);
  }
  if (((*(byte *)(param_1 + 0x124) & 0x40) != 0) && (iVar1 = param_1[0x13a], iVar1 != 0)) {
    param_1[0x13a] = 0;
    FUN_0050ac20(iVar1,3);
  }
  param_1[0x150] = -1;
  param_1[0x159] = -1;
  param_1[0x160] = 0;
  param_1[0x13a] = 0;
  param_1[0x14d] = 0;
  param_1[0x138] = 0;
  return;
}

