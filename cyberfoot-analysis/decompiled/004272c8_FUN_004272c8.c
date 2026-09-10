// Address: 004272c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004272c8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_3;
  if (param_2 != 0) {
    cVar1 = FUN_004096cc(param_3,param_4);
    if ((cVar1 == '\0') && (param_1 == *(int *)(param_2 + 4))) {
      iVar2 = FUN_00427360(param_1,param_4);
      if (iVar2 != 0) {
        local_10 = param_4;
        local_c = 0xb;
        FUN_0040e468(PTR_DAT_0041b624,1,PTR_PTR_0066b32c,0,&local_10);
        FUN_00404250();
      }
    }
  }
  if (((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (*(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_1 + 4) + 0x20))(*(int **)(param_1 + 4),param_2,local_8,param_4);
  }
  return;
}

