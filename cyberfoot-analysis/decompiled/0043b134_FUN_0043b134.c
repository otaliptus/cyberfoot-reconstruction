// Address: 0043b134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043b134(int param_1,UINT *param_2)

{
  UINT UVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  
  if (*param_2 == 0x113) {
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    FUN_00403c80(param_1);
    *in_FS_OFFSET = uVar2;
  }
  else {
    UVar1 = DefWindowProcA(*(HWND *)(param_1 + 0x34),*param_2,param_2[1],param_2[2]);
    param_2[3] = UVar1;
  }
  return;
}

