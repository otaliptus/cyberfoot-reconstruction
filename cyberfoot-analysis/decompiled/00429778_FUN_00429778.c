// Address: 00429778
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00429778(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 *local_14;
  undefined1 local_d;
  undefined4 *local_c;
  int local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puStack_18 = (undefined *)0x42979c;
  local_14 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_0042967c(param_1);
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_14[1] = local_14[1] + -1;
  local_d = local_14[1] == 0;
  if ((bool)local_d) {
    puVar1 = *(undefined4 **)(local_8 + 4);
    if (*(undefined4 **)(local_8 + 4) == local_c) {
      *(undefined4 *)(local_8 + 4) = *local_c;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined4 *)*puVar2;
      } while (puVar1 != local_c);
      *puVar2 = *local_c;
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &DAT_00429806;
  uStack_1c = 0x4297fe;
  FUN_00429688(local_8,uStack_20,&stack0xfffffffc);
  return;
}

