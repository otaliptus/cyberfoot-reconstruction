// Address: 0048d860
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0048d860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x1a4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  do {
    if (*(int *)(*(int *)(param_1 + 0x1a4) + 8) == 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        uVar2 = 0xcd;
      }
      else {
        uVar2 = 0xce;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      return 1;
    }
    while (*(uint *)(param_1 + 0x8c) < *(uint *)(param_1 + 0x74)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 4) = *(uint *)(param_1 + 0x8c);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x74);
        (*(code *)**(undefined4 **)(param_1 + 8))();
      }
      iVar1 = *(int *)(param_1 + 0x8c);
      (**(code **)(*(int *)(param_1 + 0x1a8) + 4))(param_1,0,param_1 + 0x8c,0);
      if (iVar1 == *(int *)(param_1 + 0x8c)) {
        return 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x1a4) + 4))();
    (*(code *)**(undefined4 **)(param_1 + 0x1a4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  } while( true );
}

