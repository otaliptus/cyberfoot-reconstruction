// Address: 0043b280
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0043b280(int param_1,char param_2)

{
  char cVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_0046e7a8(param_1,0);
  *(undefined4 *)(param_1 + 0x50) = DAT_0043b338;
  FUN_00456c14();
  cVar1 = FUN_00456cf4();
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x50) = ~DAT_0043b340 & (*(uint *)(param_1 + 0x50) | _DAT_0043b33c);
  }
  FUN_004659c4(param_1,0xb9);
  FUN_004659e8(param_1,0x29);
  *(undefined1 *)(param_1 + 0x220) = 2;
  FUN_0043b6d0(param_1,2);
  FUN_0043b6ec(param_1,1);
  *(undefined1 *)(param_1 + 0x21c) = 0;
  FUN_004663a8(param_1,0xff00000f);
  *(undefined1 *)(param_1 + 0x21d) = 1;
  FUN_0046cd74(param_1,1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

