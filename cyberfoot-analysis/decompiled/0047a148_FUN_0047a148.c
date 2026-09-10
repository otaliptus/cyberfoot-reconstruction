// Address: 0047a148
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

char FUN_0047a148(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  char local_5;
  
  local_5 = '\x01';
  local_c = *(int *)(*param_1 + 100);
  if (local_c != 0) {
    puStack_1c = (undefined1 *)param_4;
    puStack_20 = (undefined1 *)0x47a176;
    local_5 = FUN_0047a148(&local_c,param_2 + 1);
  }
  if ((local_5 != '\0') && (local_5 != '\x03')) {
    if (local_5 == '\x02') {
      if ((*(int *)(param_4 + -4) == 0) ||
         (*(short *)(*(int *)(param_4 + -4) + 0x60) != *(short *)(param_4 + -6))) {
        puStack_1c = (undefined1 *)0x47a1c3;
        uVar1 = FUN_00479fa0(*(undefined4 *)(param_4 + -0xc),*(undefined2 *)(param_4 + -6),2);
        *(undefined4 *)(param_4 + -4) = uVar1;
        if (*(int *)(param_4 + -4) == 0) {
          return '\x03';
        }
      }
      puStack_1c = (undefined1 *)0x47a1e8;
      iVar2 = thunk_FUN_0047a13e(*(undefined4 *)(param_4 + -4),param_2);
      *param_1 = iVar2;
      if (*param_1 == 0) {
        return local_5;
      }
      if (*(int *)(*param_1 + 100) != local_c) {
        return local_5;
      }
      if (param_2 == 0) {
        local_5 = '\x01';
      }
    }
    if (*(char *)(*param_1 + 0x39) == '\0') {
      local_5 = '\0';
    }
    else {
      puStack_20 = &LAB_0047a26d;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_1c = &stack0xfffffffc;
      if ((*(byte *)(*(int *)(param_4 + -0xc) + 0x1c) & 0x10) == 0) {
        puStack_1c = &stack0xfffffffc;
        FUN_00479074(*param_1);
      }
      (**(code **)(*(int *)*param_1 + 0x44))();
      if ((*(int *)(param_4 + -4) == 0) ||
         ((*param_1 != *(int *)(param_4 + -4) &&
          (*(short *)(*(int *)(param_4 + -4) + 0x60) != *(short *)(param_4 + -6))))) {
        local_5 = '\x02';
      }
      *in_FS_OFFSET = uStack_24;
    }
  }
  return local_5;
}

