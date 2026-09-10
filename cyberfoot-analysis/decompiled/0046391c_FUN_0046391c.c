// Address: 0046391c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0046391c(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_00463804(param_1,0);
  uVar1 = FUN_0042a9c4(PTR_PTR_00428bb8,1);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar2 = FUN_0043212c(0,0xffffff);
  FUN_0042ab40(uVar1,uVar2);
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_20;
  }
  return param_1;
}

