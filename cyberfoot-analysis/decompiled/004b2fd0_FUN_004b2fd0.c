// Address: 004b2fd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b2fd0(int *param_1,HMODULE param_2,undefined4 param_3)

{
  LPCSTR lpName;
  HRSRC pHVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  LPCSTR lpType;
  undefined1 *puVar4;
  
  puVar4 = &stack0xfffffffc;
  lpType = (LPCSTR)0xa;
  lpName = (LPCSTR)FUN_00404da4(param_3);
  pHVar1 = FindResourceA(param_2,lpName,lpType);
  if (pHVar1 != (HRSRC)0x0) {
    uVar2 = FUN_00421234(PTR_PTR_0041c10c,1,param_2);
    uVar3 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffe0;
    (**(code **)(*param_1 + 0x54))(param_1,uVar2);
    *in_FS_OFFSET = uVar3;
    FUN_00403a84(uVar2,uVar3,puVar4);
    return;
  }
  return;
}

