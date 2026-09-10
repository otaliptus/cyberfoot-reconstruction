// Address: 0047660c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047660c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_1a;
  byte local_19;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  byte local_5;
  
  local_14 = 0;
  local_18 = 0;
  iVar2 = 0;
  iVar3 = 0;
  local_10 = param_3;
  local_c = param_1;
  if (param_2 != 0) {
    iVar2 = FUN_00478b4c(param_2);
  }
  if (local_10 != 0) {
    iVar3 = FUN_00478b4c(local_10);
  }
  local_1a = '\0';
  while ((local_1a == '\0' && ((local_14 < iVar2 || (local_18 < iVar3))))) {
    local_5 = 0xff;
    local_19 = 0xff;
    if (local_14 < iVar2) {
      iVar1 = FUN_00478b5c(param_2,local_14);
      local_5 = *(byte *)(iVar1 + 0x3f);
    }
    if (local_18 < iVar3) {
      iVar1 = FUN_00478b5c(local_10,local_18);
      local_19 = *(byte *)(iVar1 + 0x3f);
    }
    if (local_19 < local_5) {
      local_5 = local_19;
      local_1a = FUN_004765ac(&local_18,local_10,local_c,&stack0xfffffffc);
    }
    else {
      local_1a = FUN_004765ac(&local_14,param_2,local_c,&stack0xfffffffc);
    }
    while ((local_14 < iVar2 &&
           (iVar1 = FUN_00478b5c(param_2,local_14), *(byte *)(iVar1 + 0x3f) <= local_5))) {
      local_14 = local_14 + 1;
    }
    while ((local_18 < iVar3 &&
           (iVar1 = FUN_00478b5c(local_10,local_18), *(byte *)(iVar1 + 0x3f) <= local_5))) {
      local_18 = local_18 + 1;
    }
  }
  return;
}

