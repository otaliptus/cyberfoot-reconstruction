// Address: 004b31b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004b31b4(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int extraout_EDX;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  char local_8;
  char local_7;
  char local_6;
  char local_5;
  
  local_c = *(int *)(param_1 + 0x54);
  if ((local_c == -1) && (cVar2 = FUN_004b32c8(param_1), local_c = -1, cVar2 != '\0')) {
    local_c = 0;
    local_10 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
    if (0 < local_10) {
      iVar5 = 1;
      do {
        FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
        (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&local_5,1);
        if (local_5 == '!') {
          uVar3 = (**(code **)**(undefined4 **)(param_1 + 0x28))();
          iVar4 = (int)(iVar5 + 8U) >> 0x1f;
          if (iVar4 == extraout_EDX) {
            if (iVar5 + 8U < uVar3) {
LAB_004b3240:
              (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&local_6,1);
              (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&local_7,1);
              uVar1 = *(undefined4 *)(param_1 + 0x28);
              FUN_004208d4(uVar1);
              FUN_004208f4(uVar1);
              (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),&local_8,1);
              if (((local_6 == -7) && (local_7 == '\x04')) && (local_8 == ',')) {
                local_c = local_c + 1;
              }
            }
          }
          else if (iVar4 < extraout_EDX) goto LAB_004b3240;
        }
        iVar5 = iVar5 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    *(int *)(param_1 + 0x54) = local_c;
    FUN_004208f4(*(undefined4 *)(param_1 + 0x28));
  }
  return local_c;
}

