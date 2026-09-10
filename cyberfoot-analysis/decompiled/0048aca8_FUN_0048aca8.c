// Address: 0048aca8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0048aca8(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar1 = extraout_DL;
  }
  FUN_0042cb20(param_1,0);
  FUN_0048bc60(param_1);
  *(undefined1 *)(param_1 + 0x3f) = DAT_0066531c;
  *(undefined1 *)(param_1 + 0x3d) = DAT_0066531d;
  *(undefined1 *)(param_1 + 0x42) = DAT_0066531e;
  *(undefined1 *)(param_1 + 0x3e) = DAT_0066531f;
  *(undefined1 *)(param_1 + 0x40) = DAT_00665320;
  *(undefined1 *)(param_1 + 0x41) = DAT_00665321;
  *(undefined1 *)(param_1 + 0x43) = DAT_00665322;
  *(undefined1 *)(param_1 + 0x3c) = DAT_00665323;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}

