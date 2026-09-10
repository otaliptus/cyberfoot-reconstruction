// Address: 00485628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00485628(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_3 == '\x01') {
    uVar1 = (uint)(*(int *)(param_1 + 0x44) < *(int *)(param_2 + 0x44));
  }
  else if (param_3 == '\x02') {
    iVar2 = *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x4c);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 < *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x4c));
  }
  else if (param_3 == '\x03') {
    uVar1 = (uint)(*(int *)(param_1 + 0x40) < *(int *)(param_2 + 0x40));
  }
  else if (param_3 == '\x04') {
    iVar2 = *(int *)(param_2 + 0x40) + *(int *)(param_2 + 0x48);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 < *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48));
  }
  return uVar1;
}

