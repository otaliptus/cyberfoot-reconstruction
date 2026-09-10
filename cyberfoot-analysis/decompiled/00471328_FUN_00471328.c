// Address: 00471328
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00471328(int param_1,char param_2)

{
  undefined1 uVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = 5;
  if (((*(int *)PTR_DAT_0066b790 == 2) && (3 < *(int *)PTR_DAT_0066afcc)) ||
     ((*(int *)PTR_DAT_0066b790 == 1 &&
      ((4 < *(int *)PTR_DAT_0066afcc ||
       ((*(int *)PTR_DAT_0066afcc == 4 && (9 < *(int *)PTR_DAT_0066b47c)))))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  FUN_0047149c(param_1,0);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

