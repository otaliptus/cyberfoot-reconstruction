// Address: 0044cb40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0044cb40(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_0046872c(param_1,0);
  iVar2 = GetSystemMetrics(2);
  FUN_004659c4(param_1,iVar2);
  iVar2 = GetSystemMetrics(0x14);
  FUN_004659e8(param_1,iVar2);
  uVar1 = *(uint *)(param_1 + 0x4c);
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar1 & 1) != 0);
  }
  FUN_004659e8(param_1,uVar1 + iVar2);
  *(undefined1 *)(param_1 + 0x208) = 1;
  *(undefined1 *)(param_1 + 0x21f) = 0;
  *(undefined2 *)(param_1 + 0x21c) = 0;
  *(undefined2 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x212) = 100;
  *(undefined4 *)(param_1 + 0x214) = 1;
  *(undefined1 *)(param_1 + 0x228) = 1;
  *(undefined1 *)(param_1 + 0x229) = 1;
  *(undefined1 *)(param_1 + 0x21e) = 1;
  *(uint *)(param_1 + 0x50) = ~DAT_0044cc08 & *(uint *)(param_1 + 0x50);
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

