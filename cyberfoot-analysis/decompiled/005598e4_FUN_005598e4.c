// Address: 005598e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005598e4(int param_1,undefined4 param_2)

{
  int iVar1;
  char local_9;
  undefined4 local_8;
  
  local_9 = '\x01';
  if (*(int *)(param_1 + 0xb8) != 0) {
    local_8 = param_2;
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      if (*(char *)(param_1 + 0x13d) == '\0') {
        if (*(short *)(param_1 + 0x142) != 0) {
          (**(code **)(param_1 + 0x140))(*(undefined4 *)(param_1 + 0x144),param_1,&local_9,param_2);
        }
        if (local_9 != '\0') {
          if (*(short *)(param_1 + 0x14a) != 0) {
            (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1);
          }
          FUN_00483bc4(*(undefined4 *)(param_1 + 0xb8));
          *(undefined4 *)(param_1 + 0xb8) = 0;
        }
      }
      else {
        if (*(short *)(param_1 + 0x142) != 0) {
          (**(code **)(param_1 + 0x140))(*(undefined4 *)(param_1 + 0x144),param_1,&local_9,param_2);
        }
        if (local_9 != '\0') {
          iVar1 = *(int *)(param_1 + 0xb8);
          *(int *)(iVar1 + 0x294) = param_1;
          *(undefined1 **)(iVar1 + 0x290) = &LAB_00558928;
          *(undefined4 *)(iVar1 + 0x24c) = local_8;
        }
      }
    }
    else {
      FUN_00483bc4();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  return;
}

