// Address: 0040fba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0040fba0(int param_1,char param_2)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    cVar3 = extraout_DL;
  }
  FUN_00403a54(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = 0xffff;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,-1,-1,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x10) = pvVar1;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x14) = pvVar1;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  uVar2 = FUN_00403a54(PTR_DAT_004092b0,1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (cVar3 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}

