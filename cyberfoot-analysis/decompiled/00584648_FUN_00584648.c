// Address: 00584648
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00584648(int param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x261) != '\0') {
      cVar1 = *(char *)(param_1 + 0x21d);
      if (cVar1 == '\x01') {
        uVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
        *(undefined4 *)(param_1 + 0x1fc) = uVar2;
        FUN_00431290(uVar2,6);
        uVar2 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x2c))();
        (**(code **)(**(int **)(param_1 + 0x1fc) + 0x40))(*(int **)(param_1 + 0x1fc),uVar2);
        uVar2 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x20))();
        (**(code **)(**(int **)(param_1 + 0x1fc) + 0x34))(*(int **)(param_1 + 0x1fc),uVar2);
      }
      else if (cVar1 == '\x02') {
        *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
      }
      else if (cVar1 == '\x03') {
        *(undefined4 *)(param_1 + 0x16c) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x16c) = 0;
      }
    }
  }
  else {
    if (param_3 != '\0') {
      FUN_00403a84(*(undefined4 *)(param_1 + 0x1fc));
    }
    if (*(char *)(param_1 + 0x261) != '\0') {
      FUN_00584648(param_1,0,0);
    }
  }
  FUN_00466754(param_1);
  return;
}

