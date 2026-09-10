// Address: 0043dea8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0043dea8(int param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  iVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
  *(int *)(param_1 + 4) = iVar2;
  *(int *)(iVar2 + 0x14) = param_1;
  *(code **)(iVar2 + 0x10) = FUN_0043dfdc;
  *(undefined4 *)(param_1 + 0x1c) = 0x8080;
  *(undefined1 *)(param_1 + 0x20) = 1;
  bVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0xc + (uint)bVar1 * 4) = 0xffffffff;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 4);
  if (DAT_00662c9c == 0) {
    DAT_00662c9c = FUN_0043dda4(PTR_DAT_0043dbc4,1);
  }
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

