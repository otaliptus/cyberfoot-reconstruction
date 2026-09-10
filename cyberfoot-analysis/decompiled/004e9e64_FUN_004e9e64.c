// Address: 004e9e64
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004e9e64(int param_1,char param_2)

{
  undefined4 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0046dd28(param_1,0);
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  uVar1 = FUN_0042fcb8(PTR_PTR_00429378,1);
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  *(undefined1 *)(param_1 + 0x170) = 0;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

