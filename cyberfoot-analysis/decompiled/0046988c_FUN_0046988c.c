// Address: 0046988c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046988c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HCURSOR pHVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 local_108 [256];
  undefined4 local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_8 = 0;
  puStack_11c = &LAB_004699aa;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_004032a8(param_2,0x8c,0);
  *param_2 = param_1[0x19];
  param_2[1] = 0x44000000;
  FUN_00469824(param_1,param_2 + 2);
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    param_2[1] = param_2[1] | 0x2000000;
    param_2[2] = param_2[2] | 0x10000;
  }
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (cVar2 == '\0') {
      param_2[1] = param_2[1] | 0x8000000;
    }
  }
  if ((char)param_1[0x69] != '\0') {
    param_2[1] = param_2[1] | 0x10000;
  }
  param_2[3] = param_1[0x10];
  param_2[4] = param_1[0x11];
  param_2[5] = param_1[0x12];
  param_2[6] = param_1[0x13];
  if (param_1[0xc] == 0) {
    param_2[7] = param_1[100];
  }
  else {
    iVar3 = FUN_0046cae0(param_1[0xc]);
    param_2[7] = iVar3;
  }
  param_2[9] = 0xb;
  param_2[10] = (int)DefWindowProcA;
  pHVar4 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  param_2[0xf] = (int)pHVar4;
  param_2[0x10] = 0;
  param_2[0xd] = DAT_0066c668;
  FUN_004039d4(*param_1,local_108);
  FUN_00404b48(&local_8,local_108);
  FUN_0040a7f8(param_2 + 0x13,local_8);
  puVar1 = puStack_118;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004699b1;
  puStack_11c = (undefined1 *)0x4699a9;
  FUN_004048d4(&local_8,uStack_120,puVar1);
  return;
}

