// Address: 00479db8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00479db8(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_00403de8();
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_00476aa0(PTR_PTR_004755ac,1,param_1);
  param_1[0xd] = iVar1;
  *(int **)(iVar1 + 0x84) = param_1;
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(*param_1 + 0x38);
  *(int **)(iVar1 + 0x70) = param_1;
  iVar1 = FUN_00403a54(PTR_DAT_0047361c,1);
  param_1[0x11] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0047a6d0;
  *(undefined1 *)((int)param_1 + 0x41) = 1;
  FUN_00426e58(param_1,0,param_3);
  iVar1 = param_1[0xd];
  *(undefined1 *)(iVar1 + 0x3b) = 0;
  *(undefined1 *)(iVar1 + 0x3c) = 0;
  FUN_0047aae4(param_1);
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_24;
  }
  return param_1;
}

