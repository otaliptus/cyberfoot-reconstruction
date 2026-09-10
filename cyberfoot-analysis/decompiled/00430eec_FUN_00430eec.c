// Address: 00430eec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00430eec(int *param_1,HANDLE param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined1 local_5c [84];
  int local_8;
  
  iVar1 = param_1[10];
  if (param_2 != *(HANDLE *)(iVar1 + 8)) {
    FUN_0043051c(param_1);
    FUN_004032a8(local_5c,0x54,0);
    if (param_2 != (HANDLE)0x0) {
      GetObjectA(param_2,0x54,local_5c);
    }
    if (*(int *)(iVar1 + 4) == 1) {
      local_8 = *(int *)(iVar1 + 0x10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else if (*(int *)(iVar1 + 0x10) == DAT_0066c894) {
      local_8 = DAT_0066c894;
    }
    else {
      local_8 = FUN_0042fa48();
    }
    *in_FS_OFFSET = &stack0xffffff8c;
    uVar2 = 0;
    FUN_004307ec(param_1,param_2,local_8,0,0,local_5c);
    *in_FS_OFFSET = uVar2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

