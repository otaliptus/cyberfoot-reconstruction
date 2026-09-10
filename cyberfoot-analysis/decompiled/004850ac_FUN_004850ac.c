// Address: 004850ac
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004850ac(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  puVar3 = (undefined4 *)0x0;
  while ((puVar2 = puVar1, puVar2 != (undefined4 *)0x0 && (param_2 != puVar2[1]))) {
    puVar3 = puVar2;
    puVar1 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)0x0) {
    DestroyCursor((HCURSOR)puVar2[2]);
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x5c) = *puVar2;
    }
    else {
      *puVar3 = *puVar2;
    }
    FUN_0040281c(puVar2,0xc);
  }
  return;
}

