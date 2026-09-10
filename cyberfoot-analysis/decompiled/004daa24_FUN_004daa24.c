// Address: 004daa24
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004daa24(int param_1,char param_2)

{
  DWORD DVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar2 = extraout_DL;
  }
  FUN_00426e58(param_1,0);
  FUN_00487384(*(undefined4 *)PTR_DAT_0066b3ac);
  DVar1 = GetTickCount();
  *(DWORD *)(param_1 + 0x3c) = DVar1;
  DVar1 = GetTickCount();
  *(DWORD *)PTR_DAT_0066af64 = DVar1;
  if (cVar2 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

