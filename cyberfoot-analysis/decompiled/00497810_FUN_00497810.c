// Address: 00497810
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00497810(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1000);
  puVar1[6] = uVar2;
  *puVar1 = uVar2;
  puVar1[1] = 0x1000;
  return;
}

